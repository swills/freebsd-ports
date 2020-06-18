--- common/sub/expr_gram.y.orig	2020-06-17 20:52:24.267311000 -0400
+++ common/sub/expr_gram.y	2020-06-17 20:54:31.263104000 -0400
@@ -16,6 +16,7 @@
  * along with this program. If not, see <http://www.gnu.org/licenses/>.
  */
 
+%define api.prefix {sub_expr_gram_}
 %{
 
 #include <common/ac/stdarg.h>
