# Created by: Alexey V. Degtyarev <alexey@renatasystems.org>
# $FreeBSD: head/mail/sa-stats/Makefile 474907 2018-07-18 22:20:23Z yuri $

PORTNAME=	sa-stats
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	mail
MASTER_SITES=	http://www.rulesemporium.com/programs/ \
		ftp://renatasystems.org/pub/FreeBSD/ports/distfiles/
EXTRACT_SUFX=	.txt
EXTRACT_ONLY=

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generates top spam/ham rules fired for SpamAssassin installations

USES=		perl5 shebangfix
SHEBANG_FILES=	sa-stats-1.0.txt

NO_WRKSUBDIR=	yes
NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/sa-stats

post-extract:
	${CP} ${DISTDIR}/${DISTFILES} ${WRKSRC}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${DISTFILES} \
		${STAGEDIR}${PREFIX}/bin/sa-stats

.include <bsd.port.mk>
