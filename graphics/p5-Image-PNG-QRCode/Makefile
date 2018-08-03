# $FreeBSD: head/graphics/p5-Image-PNG-QRCode/Makefile 475449 2018-07-27 17:47:35Z dvl $

PORTNAME=	Image-PNG-QRCode
DISTVERSION=	0.09
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Make a PNG image containing a QR code from text

LICENSE=	GPLv3

LIB_DEPENDS=	libpng.so:graphics/png

RUN_DEPENDS+=	p5-Carp>0:devel/p5-Carp
RUN_DEPENDS+=	p5-Exporter>0:devel/p5-Exporter
RUN_DEPENDS+=	p5-XSLoader>0:devel/p5-XSLoader

USES=		perl5
USE_PERL5=	configure

post-patch:
	${REINPLACE_CMD} -e 's|INC => $$vars->{inc}|INC => "-I${LOCALBASE}/include"|g' \
		${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
