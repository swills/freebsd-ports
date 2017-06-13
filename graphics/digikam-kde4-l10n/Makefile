# $FreeBSD: head/graphics/digikam-kde4-l10n/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	digikam-l10n
PORTVERSION=	${DIGIKAM_VER}
PORTREVISION=	1
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	l10n for digiKam, showFoto, and Kipi-plugins

CONFLICTS_INSTALL=	digikam-2.* kipi-plugins-2.* libkgeomap-2.*

USES=		gettext-tools
WRKSRC=		${WRKDIR}/${DISTNAME}/po

pre-configure:
# avoid conflicts with kde4-l10n ports:
	${RM} ${WRKSRC}/*/libkipi.po

.include "${.CURDIR}/../digikam-kde4/Makefile.common"
.include <bsd.port.mk>
