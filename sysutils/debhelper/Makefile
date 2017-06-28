# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/sysutils/debhelper/Makefile 444477 2017-06-27 16:13:33Z sunpoet $

PORTNAME=	debhelper
PORTVERSION=	10.5.1
CATEGORIES=	sysutils
MASTER_SITES=	DEBIAN
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Helper programs for debian/rules

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/GPL

PORTSCOUT=	limit:^[0-9\.]*$$

MAKE_ARGS=	PREFIX=${PREFIX} SITE_PERL=${PREFIX}/${SITE_PERL_REL}
NO_ARCH=	yes
NO_BUILD=	yes
USES=		gmake perl5 shebangfix tar:xz
WRKSRC=		${WRKDIR}/${PORTNAME}

SHEBANG_FILES=	dh*

post-patch:
	@${RM} ${WRKSRC}/*.orig

.include <bsd.port.mk>
