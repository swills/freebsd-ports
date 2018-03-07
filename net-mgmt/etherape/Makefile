# Created by: Holger Lamm <holger@eit.uni-kl.de>
# $FreeBSD: head/net-mgmt/etherape/Makefile 463626 2018-03-05 08:19:09Z woodsb02 $

PORTNAME=	etherape
PORTVERSION=	0.9.16
CATEGORIES=	net-mgmt gnome
MASTER_SITES=	SF

MAINTAINER=	woodsb02@FreeBSD.org
COMMENT=	Graphical network traffic monitor tool modeled after Etherman

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	itstool:textproc/itstool \
		yelp-tools>=0:textproc/yelp-tools
LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libpopt.so:devel/popt

USES=		gettext gmake iconv localbase pathfix pkgconfig
USE_GNOME=	cairo gdkpixbuf2 libglade2 libgnomecanvas
GNU_CONFIGURE=	yes

PORTDOCS=	AUTHORS ChangeLog FAQ NEWS README README.bugs TODO

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e \
		's|char \*argv)|char **argv)|' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e \
		's|__EXPORT__|__EXPORT_H__|' ${WRKSRC}/src/export.h

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
