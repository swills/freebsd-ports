--- django/db/backends/sqlite3/schema.py.orig	2019-09-02 09:44:58.000000000 +0300
+++ django/db/backends/sqlite3/schema.py	2019-09-25 19:18:23.162005000 +0300
@@ -24,12 +24,14 @@
             c.execute('PRAGMA foreign_keys')
             self._initial_pragma_fk = c.fetchone()[0]
             c.execute('PRAGMA foreign_keys = 0')
+            c.execute('PRAGMA legacy_alter_table = ON')
         return super(DatabaseSchemaEditor, self).__enter__()
 
     def __exit__(self, exc_type, exc_value, traceback):
         super(DatabaseSchemaEditor, self).__exit__(exc_type, exc_value, traceback)
         with self.connection.cursor() as c:
             # Restore initial FK setting - PRAGMA values can't be parametrized
+            c.execute('PRAGMA legacy_alter_table = OFF')
             c.execute('PRAGMA foreign_keys = %s' % int(self._initial_pragma_fk))
 
     def quote_value(self, value):
