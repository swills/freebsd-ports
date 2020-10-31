# $FreeBSD$

PORTNAME=	exhale
DISTVERSION=	1.0.8
CATEGORIES=	audio

MAINTAINER=	daniel.engberg.lists@pyret.net
COMMENT=	Open source xHE-AAC (Extended HE-AAC/USAC) encoder

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/include/License.htm

USES=		cmake compiler:c++11-lang

USE_GITLAB=	yes
GL_ACCOUNT=	ecodis
GL_COMMIT=	8b56192418bb5262054f12d53969555d47072e44

USE_LDCONFIG=	yes

PLIST_FILES=	bin/exhale \
		lib/libexhale.so

.include <bsd.port.mk>
