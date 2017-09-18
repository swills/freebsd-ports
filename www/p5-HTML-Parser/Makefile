# Created by: Vanilla I. Shu <vanilla@FreeBSD.org>
# $FreeBSD: head/www/p5-HTML-Parser/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	HTML-Parser
PORTVERSION=	3.72
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Perl5 module for parsing HTML documents

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-HTML-Tagset>=3:www/p5-HTML-Tagset
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
