# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD$
#    $MCom: ports/security/libgnomesu/Makefile,v 1.2 2007/05/19 21:36:21 marcus Exp $

PORTNAME=	libgnomesu
PORTVERSION=	2.0.2
CATEGORIES=	security gnome

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library and frontend for running commands as root

LICENSE=	LGPL20+ PD
LICENSE_COMB=	multi
LICENSE_FILE_LGPL20+ =	${WRKSRC}/COPYING

USES=		autoreconf gmake gettext-tools libtool localbase pathfix pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	openSUSE
GH_PROJECT=	libgnomesu
GH_TAGNAME=	v${PORTVERSION}

USE_GNOME=	cairo gdkpixbuf2 gnomeprefix gtk30 intltool libgnomeui
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-install-pam \
		--disable-setuid-error
INSTALL_TARGET=	install-strip

SUB_FILES=	pkg-message

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${FILESDIR}/gnomesu-pam.sample ${STAGEDIR}${EXAMPLESDIR}

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/api.html ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/libgnomesu.css ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
