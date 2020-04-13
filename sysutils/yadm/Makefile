# $FreeBSD$

PORTNAME=	yadm
PORTVERSION=	2.4.0
PORTREVISION=	1
CATEGORIES=	sysutils

MAINTAINER=	vendion@gmail.com
COMMENT=	Yet Another Dotfiles Manager

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	git:devel/git \
		bash:shells/bash

USE_GITHUB=	yes
GH_ACCOUNT=	TheLocehiliosan

PLIST_FILES=	bin/yadm \
		man/man1/yadm.1.gz

OPTIONS_DEFINE=	J2CTL
J2CTL_DESC=	Enable Jinja2 powered template files
J2CTL_USES=	python
J2CTL_RUN_DEPENDS=	jinja2:textproc/py-jinja2-cli@${PY_FLAVOR}

do-install:
	@${MKDIR} ${STAGEDIR}
	${INSTALL_MAN} ${WRKSRC}/yadm.1 ${STAGEDIR}${MAN1PREFIX}/man/man1/
	${INSTALL_SCRIPT} ${WRKSRC}/yadm ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
