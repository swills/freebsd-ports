# Created by: Vladimir Chukharev
# $FreeBSD$

PORTNAME=	robotframework-pabot
PORTVERSION=	0.87
CATEGORIES=	devel www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	Vladimir.Chukharev@gmail.com
COMMENT=	Parallel executor for Robot Framework test cases

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}robotframework>=2.7.5:devel/py-robotframework@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}robotremoteserver>=1.0.1:devel/py-robotremoteserver@${PY_FLAVOR} \
		${PY_TYPING}

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}virtualenv>0:devel/py-virtualenv@${PY_FLAVOR} \
		${LOCALBASE}/bin/svn:devel/subversion

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && svn checkout https://github.com/mkorpela/pabot.git/tags/${PORTVERSION} \
		${WRKSRC}/pabot-${PORTVERSION}
	cd ${WRKSRC}/pabot-${PORTVERSION} && \
		${REINPLACE_CMD} -e s/python3/${PYTHON_VERSION}/ \
			-e s/source/\./ run_tests.sh && \
		LC_ALL="en_US.UTF-8" ${SH} run_tests.sh

.include <bsd.port.mk>
