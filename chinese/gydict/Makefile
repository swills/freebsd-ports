# Created by: Chih-Hsin Chang <chihhsin@cs.nctu.edu.tw>
# $FreeBSD: head/chinese/gydict/Makefile 416242 2016-06-01 13:15:36Z mat $

PORTNAME=	gydict
PORTVERSION=	1.0
DISTVERSIONPREFIX=	v
CATEGORIES=	chinese textproc python

MAINTAINER=	chihhsin@cs.nctu.edu.tw
COMMENT=	Command line tool of Yahoo! Dictionary

LICENSE=	MIT

USES=		python:run,3

USE_GITHUB=	yes
GH_ACCOUNT=	iamgyz

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	bin/gydict

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/gydict.py ${STAGEDIR}${PREFIX}/bin/gydict

.include <bsd.port.mk>
