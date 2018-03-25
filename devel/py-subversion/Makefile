# Created by: thinker@branda.to
# $FreeBSD: head/devel/py-subversion/Makefile 465240 2018-03-21 21:24:43Z brnrd $

PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PORTREVISION=	2

MAINTAINER=	lev@FreeBSD.org
COMMENT=	Python bindings for version control system

.if defined(WITH_SUBVERSION_VER) && ${WITH_SUBVERSION_VER} == 18
MASTERDIR=	${.CURDIR}/../../devel/subversion18
.else
MASTERDIR=	${.CURDIR}/../../devel/subversion
.endif
PKGDIR=		${.CURDIR}

USES+=		python
USE_PYTHON=	flavors py3kplist

SVN_BUILD_BINDINGS=	yes
SVN_BUILD_ADDONS=	yes

.include "${MASTERDIR}/Makefile.common"

CATEGORIES+=	python

CONFIGURE_ARGS+=	--without-gnome-keyring \
			--without-kwallet \
			--with-apxs=no

ALL_TARGET=	swig-py-lib swig-py
INSTALL_TARGET=	install-swig-py

.include <bsd.port.post.mk>
