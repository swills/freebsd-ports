# Created by: Axel Gonzalez <loox@e-shell.net>
# $FreeBSD: head/www/cutycapt/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	cutycapt
PORTVERSION=	20100608
PORTREVISION=	2
CATEGORIES=	www
MASTER_SITES=	http://bsd.e-shell.net/local/

MAINTAINER=	loox@e-shell.net
COMMENT=	Command-line utility to capture WebKit's rendering of a web page

LICENSE=	GPLv2

WRKSRC=		${WRKDIR}/CutyCapt

USES=		qmake qt:4
USE_QT=		moc_build imageformats_run webkit

PLIST_FILES=	bin/CutyCapt

post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/CutyCapt ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
