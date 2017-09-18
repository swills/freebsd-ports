# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: head/www/p5-HTML-WikiConverter-Markdown/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	HTML-WikiConverter-Markdown
PORTVERSION=	0.06
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert HTML to Markdown markup

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-HTML-WikiConverter>=0.67:www/p5-HTML-WikiConverter \
		p5-URI>=1.35:net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
