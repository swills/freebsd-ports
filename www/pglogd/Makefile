# Created by: Allie Micka <allie@pajunas.com>
# $FreeBSD: head/www/pglogd/Makefile 453238 2017-10-31 14:51:53Z olgeni $

PORTNAME=	pglogd
PORTVERSION=	2.3
PORTREVISION=	2
CATEGORIES=	www databases
MASTER_SITES=	http://digitalstratum.com/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sends web server log entries to a PostgreSQL database

LICENSE=	BSD3CLAUSE

USES=		pgsql
USE_RC_SUBR=	020.pglogd.sh
SUB_FILES=	pkg-message

.include <bsd.port.mk>
