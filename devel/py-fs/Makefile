# Created by: Douglas Thrift <douglas@douglasthrift.net>
# $FreeBSD$

PORTNAME=	fs
PORTVERSION=	2.1.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	Python filesystem abstraction

LICENSE=	ISCL

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}appdirs>=1.4.3:devel/py-appdirs@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytz>0:devel/py-pytz@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.10:devel/py-six@${PY_FLAVOR} \
		${PY_ENUM34}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3000
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}backports.os>=0.1:devel/py-backports.os@${PY_FLAVOR}
.endif

.if ${PYTHON_REL} < 3500
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}scandir>=1.5:sysutils/py-scandir@${PY_FLAVOR}
.endif

.if ${PYTHON_REL} < 3600
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}typing>=3.6:devel/py-typing@${PY_FLAVOR}
.endif

.include <bsd.port.post.mk>
