# $FreeBSD: head/security/py-ssh-audit/Makefile 454849 2017-11-24 21:32:05Z yuri $

PORTNAME=	ssh-audit
DISTVERSIONPREFIX=	v
DISTVERSION=	1.7.0
CATEGORIES=	security
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	pkubaj@anongoth.pl
COMMENT=	SSH server auditing

LICENSE=	MIT

USES=		python shebangfix
USE_GITHUB=	yes
GH_ACCOUNT=	arthepsy
USE_PYTHON=	concurrent
NO_BUILD=	yes
NO_ARCH=	yes
SHEBANG_FILES=	ssh-audit.py

PLIST_FILES=	bin/ssh-audit

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/ssh-audit.py ${STAGEDIR}${PREFIX}/bin/ssh-audit

.include <bsd.port.mk>
