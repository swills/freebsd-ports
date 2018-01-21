# Created by: Dmitry Kazarov <d.y.kazarov@mail.ru>
# $FreeBSD: head/print/qpdf/Makefile 459229 2018-01-17 09:12:20Z tcberner $

PORTNAME=	qpdf
PORTVERSION=	6.0.0
PORTREVISION=	2
CATEGORIES=	print
MASTER_SITES=	SF

MAINTAINER=	d.y.kazarov@mail.ru
COMMENT=	Command-line tools for transforming and inspecting PDF documents

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/Artistic-2.0

LIB_DEPENDS=	libpcre.so:devel/pcre

OPTIONS_DEFINE=	DOCS

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
USE_LDCONFIG=	yes
USES=		gmake libtool
USE_CXXSTD=	gnu++98

post-patch:
	@${REINPLACE_CMD} 's/make --version/${MAKE_CMD} --version/' \
		${WRKSRC}/configure

.include <bsd.port.mk>
