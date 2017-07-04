# Created by: Steve Wills <swills@freebsd.org>
# $FreeBSD: head/www/uglifyjs/Makefile 444756 2017-06-30 14:43:59Z antoine $

PORTNAME=	uglifyjs
PORTVERSION=	1.3.5
DISTVERSIONPREFIX=	v
CATEGORIES=	www devel

MAINTAINER=	swills@FreeBSD.org
COMMENT=	JavaScript parser/compressor/beautifier

LICENSE=	BSD2CLAUSE

BROKEN=		fails to package

BUILD_DEPENDS=	npm>=0:www/npm
RUN_DEPENDS=	npm>=0:www/npm

NO_BUILD=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	mishoo
GH_PROJECT=	UglifyJS

do-install:
	(cd ${STAGEDIR}${PREFIX}/lib ; ${SETENV} HOME=${WRKDIR} npm install ${WRKSRC})
	# this is a dirty hack
	${LN} -s ${PREFIX}/lib/node_modules/.bin/uglifyjs ${STAGEDIR}${PREFIX}/bin/uglifyjs

.include <bsd.port.mk>
