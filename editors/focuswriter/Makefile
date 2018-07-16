# Created by: lightside <lightside@gmx.com>
# $FreeBSD$

PORTNAME=	focuswriter
DISTVERSIONPREFIX=	v
DISTVERSION=	1.6.14
CATEGORIES=	editors

MAINTAINER=	lightside@gmx.com
COMMENT=	Simple, distraction-free writing environment

LICENSE=	GPLv3+ LGPL3+
LICENSE_COMB=	multi
LICENSE_FILE_GPLv3+ =	${WRKSRC}/COPYING
LICENSE_FILE_LGPL3+ =	${WRKSRC}/resources/images/icons/oxygen/COPYING

LIB_DEPENDS=	libhunspell-1.6.so:textproc/hunspell

USES=		compiler:c++11-lib desktop-file-utils pkgconfig qmake qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	gottcode
USE_GL=		gl
USE_QT=		concurrent core gui multimedia network printsupport widgets \
		buildtools_build linguisttools_build

PORTDATA=	*
PORTDOCS=	ChangeLog CREDITS README

OPTIONS_DEFINE=	CACHE_ICONS DOCS
CACHE_ICONS_DESC=	Update icon cache after installation (GTK+)
CACHE_ICONS_RUN_DEPENDS=	${LOCALBASE}/bin/gtk-update-icon-cache:graphics/gtk-update-icon-cache

post-patch:
	@${REINPLACE_CMD} -e '/INSTALLS/s/man //' \
		${WRKSRC}/focuswriter.pro

post-install:
	${INSTALL_MAN} ${WRKSRC}/resources/unix/focuswriter.1 \
		${STAGEDIR}${MANPREFIX}/man/man1

post-install-CACHE_ICONS-on:
.for subdir in hicolor
	@${ECHO_CMD} "@rmtry share/icons/${subdir}/icon-theme.cache" >> ${TMPPLIST}
	@${ECHO_CMD} "@postexec ${LOCALBASE}/bin/gtk-update-icon-cache -q -f %D/share/icons/${subdir} 2>/dev/null || ${TRUE}" >> ${TMPPLIST}
	@${ECHO_CMD} "@postunexec ${LOCALBASE}/bin/gtk-update-icon-cache -q -f %D/share/icons/${subdir} 2>/dev/null || ${TRUE}" >> ${TMPPLIST}
.endfor

post-install-DOCS-on:
	cd ${WRKSRC} && ${COPYTREE_SHARE} "${PORTDOCS}" ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
