# $FreeBSD$

PORTNAME=	khard
DISTVERSION=	0.15.0
CATEGORIES=	deskutils python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	andreas@bilke.org
COMMENT=	Console carddav client

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}atomicwrites>0:devel/py-atomicwrites@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}configobj>0:devel/py-configobj@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ruamel.yaml>0:devel/py-ruamel.yaml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}unidecode>0:converters/py-unidecode@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}vdirsyncer>0:deskutils/py-vdirsyncer@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}vobject>0:deskutils/py-vobject@${PY_FLAVOR}

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sphinx>0:textproc/py-sphinx@${PY_FLAVOR} \
		${RUN_DEPENDS}

USES=		python:3.5+ gmake
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	scheibler
GH_PROJECT=	khard
GH_TAGNAME=	v0.15.0

PLIST_FILES=\
		share/zsh/site-functions/_khard \
		share/zsh/site-functions/_email-khard \
		${EXAMPLESDIR}/khard.conf.example \
		${EXAMPLESDIR}/template_for_contact_creation.yaml \
		man/man1/khard.1.gz \
		man/man5/khard.conf.5.gz \
		${PYTHONPREFIX_SITELIBDIR}/khard/data/config.spec

SUB_FILES=	pkg-message

do-build:
	(cd ${WRKSRC}/doc && ${MAKE_CMD} man)

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/zsh/site-functions
	${INSTALL_DATA} ${WRKSRC}/misc/zsh/_khard \
		${STAGEDIR}${PREFIX}/share/zsh/site-functions
	${INSTALL_DATA} ${WRKSRC}/misc/zsh/_email-khard \
		${STAGEDIR}${PREFIX}/share/zsh/site-functions
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/misc/khard/ && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})
	${INSTALL_MAN} ${WRKSRC}/doc/build/man/khard.1 ${STAGEDIR}${MANPREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/doc/build/man/khard.conf.5 ${STAGEDIR}${MANPREFIX}/man/man5
	@${MKDIR} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/khard/data
	${INSTALL_DATA} ${WRKSRC}/khard/data/config.spec \
		${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/khard/data/config.spec

.include <bsd.port.mk>
