# Created by: jpaetzel@FreeBSD.org
# $FreeBSD: head/sysutils/catfish/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	catfish
PORTVERSION=	1.4.1
CATEGORIES=	sysutils
MASTER_SITES=	http://launchpad.net/catfish-search/1.4/1.4.1/+download/

MAINTAINER=	jpaetzel@FreeBSD.org
COMMENT=	GTK search utility

LICENSE=	GPLv3

RUN_DEPENDS=	\
	${PYTHON_PKGNAMEPREFIX}python-distutils-extra>0:devel/py-python-distutils-extra@${PY_FLAVOR} \
	${PYTHON_PKGNAMEPREFIX}pexpect>0:misc/py-pexpect@${PY_FLAVOR} \
	gksu:sysutils/gksu
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		python:2.7
USE_PYTHON=	distutils
USE_GNOME=	gtk30 intltool pygobject3

.include <bsd.port.pre.mk>

PYDISTUTILS_INSTALLARGS=	-c -O1 --prefix=${PREFIX} --root=${STAGEDIR}

.include <bsd.port.post.mk>
