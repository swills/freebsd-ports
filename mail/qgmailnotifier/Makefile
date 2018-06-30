# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/mail/qgmailnotifier/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	qgmailnotifier
DISTVERSION=	2014.2
CATEGORIES=	mail
MASTER_SITES=	GH

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Portable Qt 4 based GMail notifier

USES=		qmake qt:4 tar:tgz
USE_QT=		moc_build uic_build gui network xml rcc_build
USE_GITHUB=	yes
GH_ACCOUNT=	eteran

PORTDOCS=	README
PLIST_FILES=	bin/${PORTNAME}

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|/bin|${PREFIX}/bin|g' ${WRKSRC}/qgmailnotifier.pro

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
