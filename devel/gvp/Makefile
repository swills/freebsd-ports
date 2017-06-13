# Created by: Luke Jee <lukejee@gmail.com>
# $FreeBSD: head/devel/gvp/Makefile 416242 2016-06-01 13:15:36Z mat $

PORTNAME=	gvp
PORTVERSION=	0.3.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	lukejee@gmail.com
COMMENT=	Go Versioning Manager

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENCE

RUN_DEPENDS=	bash:shells/bash \
		go:lang/go

USES=		shebangfix

SHEBANG_FILES=	bin/gvp

USE_GITHUB=	yes
GH_ACCOUNT=	pote

NO_BUILD=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/gvp

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/bin/gvp ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
