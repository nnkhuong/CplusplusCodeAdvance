#include<iostream>
#include<sstream>   /* std::sstream */
#include<fstream>   /* std::ifstream */
#include<algorithm> /* open */
#include<string>    /* std::string */
#include<vector>    /* std::vector */
#include<cstdlib>   /* exit() */ 

/* constant varible */
const char *file_name = "mission1.dat";

/* Function prototype */
bool load_data_file(std::vector<std::string> &collLine, const char *i_file_name);
void process_sum_squares_1line(std::vector<std::string> &collLine);

/*******************************************************************************************
* main function                      
*
********************************************************************************************/
int main()
{
   /* container stores content of file */
   std::vector<std::string> collLine;

   std::cout <<"================In Put========" << std::endl;
   if(!load_data_file(collLine, file_name) )
   {
      std::cout <<"Cannot load file " << file_name << std::endl;
      exit(-1);
   }

   std::cout <<"================Out Put========" << std::endl;
   process_sum_squares_1line(collLine);

   return 0;
}

/*******************************************************************************************
* name: load_data_file
* purpose: loading content of data file mission1.dat to cash container collLine
* paramters: reference container collLine and file name (data)                       
* return:  True - load file success . False - load file failure
********************************************************************************************/
bool load_data_file(std::vector<std::string> &collLine, const char *i_file_name)
{

   std::ifstream ifs_file;
   std::string line;

   ifs_file.open(i_file_name);
   if(ifs_file.is_open() )
   {

      while( !ifs_file.eof() )
      {
         std::getline(ifs_file, line );
         collLine.push_back(line); /* put each line into list */
         
         std::cout << line << std::endl ;
      }
      ifs_file.close();
   }
   else
   {
      return false;
   }
   return true;
}

/*******************************************************************************************
* name: process_sum_squares_1line
* purpose: sum square of each element in one line from cash container collLine
* paramters: reference container collLine                        
* return:  non
********************************************************************************************/
void process_sum_squares_1line(std::vector<std::string> &collLine)
{
   
   int line_number = 0; /* number of lines need to calculate sum square for each element */
   std::stringstream(collLine[0]) >> line_number;

   if(line_number < 1 || line_number > 100)
   {
      std::cout << "The first line of the input will be an integer N (1 <= N <= 100)\n" ;
      return ;
   }
   int i = 0, j = 0;
   int sum_each_line = 0;
   int elements_each_line = 0;
   int step = 0, start = 0;
   int value = 0;
   for(i = 0; i < line_number ; i++)
   {
      /* get number of elements next line */
      std::stringstream(collLine[i + 1 + step]) >> elements_each_line;

      start = 0;
      sum_each_line = 0;
      for(j = 0; j < elements_each_line ; ++j)
      {  
         std::string elem_str = "";
         while( (collLine[i + 2 + step][start +j] != ' ') && ( (start+j) <= collLine[i + 2 + step].length()) )
         {
            elem_str += collLine[i + 2 + step][start+j];
            ++start;      
         }
         /* convert element string to integer number */
         std::stringstream(elem_str) >> value;
         if( value >= 1 && value <= 100 )
         {
            sum_each_line += (value * value); 
         }
      }
      std::cout << sum_each_line << "\n";
      step += 1;
   }
}
