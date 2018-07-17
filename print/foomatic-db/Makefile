# Created by: Dima Dorfman <dima@unixfreak.org>
# $FreeBSD: head/print/foomatic-db/Makefile 474602 2018-07-13 20:24:53Z danilo $

PORTNAME=	foomatic-db
PORTVERSION=	20180713
CATEGORIES=	print
MASTER_SITES=	LOCAL/danilo
DISTNAME=	${PORTNAME}-${FOOMATICVER}-${PORTVERSION}

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Database for integrating printer drivers with common spoolers

USES=		gmake tar:xz
GNU_CONFIGURE=	yes

FOOMATICVER=	4.0
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
NO_ARCH=	yes

.include <bsd.port.mk>
