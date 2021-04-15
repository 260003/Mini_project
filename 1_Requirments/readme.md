
# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to add new Account| Techincal | IMPLEMENTED | 
| HR02 | User shall be able to Deposit money  | Techincal |  IMPLEMENTED  |
| HR03 | User shall be able to Withdroal money | Techincal |  IMPLEMENTED  |
| HR04 | User shall be able to Check Balence | Techincal |  IMPLEMENTED  |
| HR05 | User shall be able to log Out | Techincal |  IMPLEMENTED  |
| HR06 | User shall be able to see Account Details | Techincal |  IMPLEMENTED  |
| HR07 | Data should not be lost in case of faliure | Scenario | FUTURE |
| HR08 | User shall be able to Update Account holder Detail | Scenario |  FUTURE |
##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | (1). New record shall be added by providing all the asked information                                                                                                    (2). Id should be unique and validated from persistant file or else patient record should not be accepted. | HR01 |  IMPLEMENTED  |
| LR02 | Reading patient data should be possible in 2 ways (1). first being by searching by id of a patient (2). By printing all the records available | HR02 |  IMPLEMENTED |
| LR03 | While reading all the records, only 10 records per page should be visible and should add 10 more if user wants to see more | HR02 | FUTURE |
| LR04 | If user searches for an invalid ID "No Record Found" message should be displayed | HR02 |  IMPLEMENTED  |
| LR05 | User need to search by id for the pateint record to be updated, if no such record is available then "No Record Found" Message should be displayed | HR03 |  IMPLEMENTED  |
| LR06 | User need to search by id for the pateint record to be deleted, if no such record is available then "No Record Found" Message should be displayed | HR04 |  IMPLEMENTED  |
| LR05 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR05 |  IMPLEMENTED  |
| LR06 | If opening the file fails, then the system shloud prompt the message "Unable to access file" and should not end the program execution | HR05, HR06, HR07, HR08 |  IMPLEMENTED  |
| LR07 | When user Log off the system perform check and save data to file (1). If new data in inserted add it to file (2). If New data is not inserted do not add anything to file | HR08 |  IMPLEMENTED  |


![image](https://user-images.githubusercontent.com/80737226/114848484-5c40c480-9dfc-11eb-9f89-0f3edd5f0256.png)
