````mermaid
sequenceDiagram
    FRONT->>+get_horizons_blocks: "Запрос списка блоков горизонта"
    get_horizons_blocks->>-FRONT: "Список блоков горизонта"
    FRONT->>+get_user_templates: "Запрос списка шаблонов отчетов доступных пользователю по ИД"
    get_user_templates->>-FRONT: "Список шаблонов отчетов доступных пользователю по ИД"
     FRONT->>+get_table_report: "Запрос таблицы отчета по его ИД"
     get_table_report->>-FRONT: "Таблица отчета по его ИД"
     FRONT->>+get_file_report: "Запрос файла отчета по его ИД"
     get_file_report->>-FRONT: "Файл отчета по его ИД"
     FRONT->>+save_custom_template: "Создание пользовательского шаблона"
     save_custom_template->>-FRONT: "Список шаблонов отчетов доступных пользователю по ИД"
        FRONT->>+delete_custom_template: "Удаление пользовательского шаблона по ИД"
     delete_custom_template->>-FRONT: "Список шаблонов отчетов доступных пользователю по ИД"
````
