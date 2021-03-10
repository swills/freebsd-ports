# Created by: George Reid <greid@ukug.uk.freebsd.org>
# $FreeBSD$

PORTNAME=	libtar
PORTVERSION=	1.2.20
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
MASTER_SITES=	https://src.fedoraproject.org/repo/pkgs/libtar/libtar-v${PORTVERSION}.tar.gz/sha512/96c35d9f52cb0226a0431517090d191b138d905d646add2100b96db01b78de6d35f4d9d44db25d497781f9a5ab5b3b8fdc703ff9db92304938ec10d535c830e8/

MAINTAINER=	manuelj.munoz@gmail.com
COMMENT=	Library for manipulating POSIX and GNU tar files

USES=		autoreconf cpe gmake libtool
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-shared
USE_LDCONFIG=	yes
CPE_VENDOR=	feep

CPPFLAGS+=	-fPIC

.include <bsd.port.mk>
