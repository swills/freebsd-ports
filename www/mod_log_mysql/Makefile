# Created by: Clement Laforet <clement@FreeBSD.org>
# $FreeBSD: head/www/mod_log_mysql/Makefile 464189 2018-03-11 17:38:45Z brnrd $

PORTNAME=	mod_log_mysql
PORTVERSION=	1.04
PORTREVISION=	2
CATEGORIES=	www
MASTER_SITES=	http://bsdforge.com/projects/source/www/mod_log_mysql/
DIST_SUBDIR=	apache2

MAINTAINER=	portmaster@bsdforge.com
COMMENT=	Allows Apache 2.2.x to log to a MySQL database

LICENSE=	PD APACHE11
LICENSE_COMB=	multi

USES=		apache:2.2 tar:xz
RUN_DEPENDS+=	${LOCALBASE}/${APACHEMODDIR}/mod_log_config-st.so:www/mod_log_config-st

AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
USE_MYSQL=	yes

AP_INC+=	${LOCALBASE}/include/mysql
AP_LIB+=	${LOCALBASE}/lib/mysql -lmysqlclient

.include <bsd.port.mk>
