# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/graphics/p5-SVG-Metadata/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	SVG-Metadata
PORTVERSION=	0.28
PORTREVISION=	1
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to capture metadata info about an SVG file

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	xml_grep:textproc/p5-XML-Twig

USES=		perl5
USE_PERL5=	configure

post-patch:
	${RM} ${WRKSRC}/lib/SVG/Metadata.pm.orig

.include <bsd.port.mk>
