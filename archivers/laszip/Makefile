# Created by: Rainer Hurling <rhurlin@gwdg.de>
# $FreeBSD: head/archivers/laszip/Makefile 488643 2018-12-29 01:46:21Z swills $

PORTNAME=	laszip
PORTVERSION=	3.2.9
CATEGORIES=	archivers

MAINTAINER=	rhurlin@gwdg.de
COMMENT=	Library for lossless LAS compression

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake compiler:c++0x
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_PROJECT=	LASzip

GNU_CONFIGURE=	yes

.include <bsd.port.mk>
