# Created by: Fukang Chen <loader@FreeBSD.org>
# $FreeBSD: head/textproc/p5-HTML-FormatText-WithLinks/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	HTML-FormatText-WithLinks
PORTVERSION=	0.14
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	loader@FreeBSD.org
COMMENT=	Perl5 module to convert HTML to text with links as footnotes

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Format>=0:textproc/p5-HTML-Format \
		p5-URI>=0:net/p5-URI

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
