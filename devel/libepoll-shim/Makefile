# Created by: Johannes Lundberg <johalun0@gmail.com>
# $FreeBSD: head/devel/libepoll-shim/Makefile 445415 2017-07-10 00:54:21Z rezny $

PORTNAME=	libepoll-shim
PORTVERSION=	0.0.20161220
CATEGORIES=	devel

MAINTAINER=	x11@FreeBSD.org
COMMENT=	epoll shim implemented using kevent

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	FreeBSDDesktop
GH_PROJECT=	epoll-shim
GH_TAGNAME=	c04b26b

USE_LDCONFIG=	yes

USES=		compiler uidfix
MAKE_ARGS=	LIBDIR=${PREFIX}/lib INCSDIR=${PREFIX}/include/libepoll-shim/sys

.include <bsd.port.pre.mk>

post-patch:
.if "${CHOSEN_COMPILER_TYPE}" == "gcc"
	@${REINPLACE_CMD} -e 's|Wno-missing-variable-declarations|Wno-missing-declarations|' \
		-e 's|-Wno-thread-safety-analysis||' -e 's|Weverything|Wall|' ${WRKSRC}/Makefile
.endif

pre-install:
	@${MKDIR} ${STAGEDIR}/${PREFIX}/include/libepoll-shim/sys

.include <bsd.port.post.mk>
