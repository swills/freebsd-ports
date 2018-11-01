# Created by: thinker@branda.to
# $FreeBSD: head/devel/py-subversion/Makefile 483685 2018-11-01 16:12:44Z lev $

PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PORTREVISION=	0

MAINTAINER=	lev@FreeBSD.org
COMMENT=	Python bindings for version control system

USES+=		python
USE_PYTHON=	flavors py3kplist

PORTREVISION_111=	0
PORTREVISION_19=	0

SVN_BUILD_BINDINGS=	yes

.include "${.CURDIR}/../../devel/subversion/Makefile.addons"

CATEGORIES+=	python

CONFIGURE_ARGS+=	--without-gnome-keyring \
			--without-kwallet \
			--with-apxs=no

ALL_TARGET=	swig-py-lib swig-py
INSTALL_TARGET=	install-swig-py

.include <bsd.port.post.mk>
