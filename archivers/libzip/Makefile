# Created by: Alexander Zhuravlev <zaa@zaa.pp.ru>
# $FreeBSD: head/archivers/libzip/Makefile 450776 2017-09-27 18:13:14Z rakuco $

PORTNAME=	libzip
PORTVERSION=	1.3.0
CATEGORIES=	archivers devel
MASTER_SITES=	https://www.nih.at/libzip/

MAINTAINER=	rakuco@FreeBSD.org
COMMENT=	C library for reading, creating, and modifying ZIP archives

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

CPE_VENDOR=	nih

GNU_CONFIGURE=	yes
USES=		cpe libtool pathfix perl5 tar:xz
USE_PERL5=	build
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

.include <bsd.port.mk>
