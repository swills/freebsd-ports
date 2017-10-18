# Created by: Matthias Andree <matthias.andree@gmx.de>
# $FreeBSD: head/misc/e2fsprogs-libblkid/Makefile 450861 2017-09-28 19:32:19Z jbeich $

PORTREVISION=	0
CATEGORIES=	misc devel
PKGNAMESUFFIX=	-libblkid

COMMENT=	Blkid library from e2fsprogs package

LICENSE=	LGPL20+
_no_license_file=	sorry

LIB_DEPENDS=	libuuid.so:misc/e2fsprogs-libuuid

CONFIGURE_ARGS=	--enable-elf-shlibs

MASTERDIR=	${.CURDIR}/../../sysutils/e2fsprogs
MAKE_ARGS=	LIB_SUBDIRS=lib/blkid LDFLAGS_SHLIB=-L${LOCALBASE}/lib
USE_LDCONFIG=	yes
ALL_TARGET=	libs
INSTALL_TARGET=	install install-shlibs
INSTALL_WRKSRC=	${WRKSRC}/lib/blkid

PKGDIR=		${.CURDIR}

pre-build:
	${MKDIR} ${WRKSRC}/lib/blkid/elfshared
	cd ${WRKSRC}/util && ${MAKE_CMD} subst

post-build:
	cd ${WRKSRC}/lib/uuid && ${MAKE_CMD}
	cd ${INSTALL_WRKSRC} && ${MAKE_CMD} check

.include "${MASTERDIR}/Makefile"
