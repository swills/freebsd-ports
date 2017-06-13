# Created by: Alexander Zhuravlev <zaa@zaa.pp.ru>
# $FreeBSD: head/archivers/libzip/Makefile 431796 2017-01-18 13:20:31Z tijl $

PORTNAME=	libzip
PORTVERSION=	1.1.3
CATEGORIES=	archivers devel
MASTER_SITES=	http://www.nih.at/libzip/

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

.include <bsd.port.mk>
