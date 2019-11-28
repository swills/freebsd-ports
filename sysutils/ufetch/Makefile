# $FreeBSD$

PORTNAME=	ufetch
DISTVERSION=	g20191028
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	sysutils

MAINTAINER=	vulcan@wired.sh
COMMENT=	Tiny system info for Unix-like operating systems

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITLAB=	yes

GL_ACCOUNT=	jschx
GL_COMMIT=	877f675c990d087247630bd956e3ba8beae92654

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME}

post-patch:
	${REINPLACE_CMD} -e 's|-freebsd||g' ${WRKSRC}/${PORTNAME}-freebsd

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}-freebsd \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
