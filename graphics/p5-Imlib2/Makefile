# Created by: Jeremy Norris <ishmael27@home.com>
# $FreeBSD: head/graphics/p5-Imlib2/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Imlib2
PORTVERSION=	1.0.0
PORTREVISION=	12
CATEGORIES=	graphics perl5
MASTER_SITES=	http://www.muhri.net/
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-Perl-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl bindings for Imlib2

LIB_DEPENDS=	libImlib2.so:graphics/imlib2

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e 's,/usr/X11R6,${LOCALBASE},g' ${WRKSRC}/Makefile.PL

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Imlib2/Imlib2.so

.include <bsd.port.mk>
