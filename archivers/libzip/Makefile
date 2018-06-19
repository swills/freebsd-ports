# Created by: Alexander Zhuravlev <zaa@zaa.pp.ru>
# $FreeBSD: head/archivers/libzip/Makefile 472400 2018-06-14 21:18:54Z rakuco $

PORTNAME=	libzip
PORTVERSION=	1.5.1
CATEGORIES=	archivers devel
MASTER_SITES=	https://libzip.org/download/

MAINTAINER=	rakuco@FreeBSD.org
COMMENT=	C library for reading, creating, and modifying ZIP archives

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

CPE_VENDOR=	nih

USES=		cmake:outsource cpe perl5 ssl tar:xz
USE_LDCONFIG=	yes
USE_PERL5=	test
TEST_TARGET=	test

CMAKE_OFF=	ENABLE_COMMONCRYPTO ENABLE_GNUTLS

.include <bsd.port.mk>
