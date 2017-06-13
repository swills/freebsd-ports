# Created by: ijliao
# $FreeBSD: head/misc/cs/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	cs
PORTVERSION=	0.9.6
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	http://njhurst.com/programming/cross-stitch/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Cross Stitch software

LICENSE=	GPLv2+

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow

NO_BUILD=	yes

USES=		python:run shebangfix tar:tgz
SHEBANG_FILES=	xs.py

PLIST_FILES=	bin/xs

do-install:
	(cd ${WRKSRC} && ${INSTALL_SCRIPT} xs.py ${STAGEDIR}${PREFIX}/bin/xs)

.include <bsd.port.mk>
