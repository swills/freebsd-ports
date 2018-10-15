# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: head/security/subversion-kwallet/Makefile 481744 2018-10-10 15:39:51Z lev $

PKGNAMESUFFIX=	-kwallet
CATEGORIES=	security kde

MAINTAINER=	lev@FreeBSD.org
COMMENT=	KDE KWallet integration for Version control system

USE_KDE=	kdelibs runtime
USES+=		kde:4

PORTREVISION_110=	0
PORTREVISION_19=	0

.include "${.CURDIR}/../../devel/subversion/Makefile.addons"

.if ${WITH_SUBVERSION_VER} == 19
CONFIGURE_ARGS+=	--with-kwallet=${KDE_PREFIX}
.else
CONFIGURE_ARGS+=	--with-kwallet=${KDE_PREFIX}/include/kde4:${KDE_PREFIX}/lib
.endif

ALL_TARGET=	kwallet-lib
INSTALL_TARGET=	install-kwallet-lib

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/*.so

.include <bsd.port.post.mk>
