# Created by: Alexey Bobkov <mr.deadlystorm@gmail.com>
# $FreeBSD$

PORTNAME=	mysqld_exporter
PORTVERSION=	0.12.1
DISTVERSIONPREFIX=v
CATEGORIES=	net-mgmt

MAINTAINER=	mr.deadlystorm@gmail.com
COMMENT=	Prometheus exporter for MySQL server metrics

LICENSE=	APACHE20

USES=		go:modules
USE_GITHUB=	yes

GH_ACCOUNT=	prometheus
GH_TUPLE=	\
		DATA-DOG:go-sqlmock:v1.3.3:data_dog_go_sqlmock/vendor/github.com/DATA-DOG/go-sqlmock \
		alecthomas:kingpin:v2.2.6:alecthomas_kingpin/vendor/gopkg.in/alecthomas/kingpin.v2 \
		alecthomas:template:fb15b899a751:alecthomas_template/vendor/github.com/alecthomas/template \
		alecthomas:units:c3de453c63f4:alecthomas_units/vendor/github.com/alecthomas/units \
		beorn7:perks:v1.0.0:beorn7_perks/vendor/github.com/beorn7/perks \
		go-check:check:788fd7840127:go_check_check/vendor/gopkg.in/check.v1 \
		go-ini:ini:v1.44.0:go_ini_ini/vendor/gopkg.in/ini.v1 \
		go-sql-driver:mysql:v1.4.1:go_sql_driver_mysql/vendor/github.com/go-sql-driver/mysql \
		golang:appengine:v1.6.1:golang_appengine/vendor/google.golang.org/appengine \
		golang:protobuf:v1.3.2:golang_protobuf/vendor/github.com/golang/protobuf \
		golang:sys:04f50cda93cb:golang_sys/vendor/golang.org/x/sys \
		gopherjs:gopherjs:3e4dfb77656c:gopherjs_gopherjs/vendor/github.com/gopherjs/gopherjs \
		jtolds:gls:v4.20.0:jtolds_gls/vendor/github.com/jtolds/gls \
		konsorten:go-windows-terminal-sequences:v1.0.2:konsorten_go_windows_terminal_sequences/vendor/github.com/konsorten/go-windows-terminal-sequences \
		kr:pretty:v0.1.0:kr_pretty/vendor/github.com/kr/pretty \
		matttproud:golang_protobuf_extensions:v1.0.1:matttproud_golang_protobuf_extensions/vendor/github.com/matttproud/golang_protobuf_extensions \
		prometheus:client_golang:v1.0.0:prometheus_client_golang/vendor/github.com/prometheus/client_golang \
		prometheus:client_model:fd36f4220a90:prometheus_client_model/vendor/github.com/prometheus/client_model \
		prometheus:common:v0.6.0:prometheus_common/vendor/github.com/prometheus/common \
		prometheus:procfs:v0.0.3:prometheus_procfs/vendor/github.com/prometheus/procfs \
		satori:go.uuid:v1.2.0:satori_go_uuid/vendor/github.com/satori/go.uuid \
		sirupsen:logrus:v1.4.2:sirupsen_logrus/vendor/github.com/sirupsen/logrus \
		smartystreets:assertions:v1.0.0:smartystreets_assertions/vendor/github.com/smartystreets/assertions \
		smartystreets:goconvey:68dc04aab96a:smartystreets_goconvey/vendor/github.com/smartystreets/goconvey

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}

PLIST_FILES=	bin/mysqld_exporter

USE_RC_SUBR=	mysqld_exporter

.include <bsd.port.mk>
