# Created by: Alexander Nusov <alexander.nusov@nfvexpress.com>
# $FreeBSD: head/www/py-django_openstack_auth/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	django_openstack_auth
PORTVERSION=	3.1.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	alexander.nusov@nfvexpress.com
COMMENT=	Django authentication backend for use with OpenStack Identity

LICENSE=	APACHE20

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pbr>=1.8:devel/py-pbr@${PY_FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}six>=1.9.0:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}keystoneauth1>=2.17.0:devel/py-keystoneauth1@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-keystoneclient>=3.8.0:net/py-python-keystoneclient@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}oslo.policy>=1.17.0:devel/py-oslo.policy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}oslo.config>=0:devel/py-oslo.config@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}django18>=0:www/py-django18@${PY_FLAVOR}

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
