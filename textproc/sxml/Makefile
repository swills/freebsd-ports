# Created by: Kouichi ABE (WALL) <kouichi@mysticwall.com>
# $FreeBSD: head/textproc/sxml/Makefile 457491 2017-12-29 03:30:13Z wen $

PORTNAME=	sxml
PORTVERSION=	1.0.7
CATEGORIES=	textproc
MASTER_SITES=	http://www.MysticWALL.COM/download/

MAINTAINER=	takefu@airport.fm
COMMENT=	Skimpy XML parsing and grafting library for C language

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES=		tar:bzip2

do-test:	build
	cd ${BUILD_WRKSRC}/examples && ${MAKE} all

.include <bsd.port.mk>
