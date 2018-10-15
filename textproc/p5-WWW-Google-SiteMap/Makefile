# Created by: nork@FreeBSD.org
# $FreeBSD: head/textproc/p5-WWW-Google-SiteMap/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	WWW-Google-SiteMap
PORTVERSION=	1.10
PORTREVISION=	1
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JASONK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for managing Google SiteMaps

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-Twig>=0:textproc/p5-XML-Twig \
		p5-URI>=0:net/p5-URI

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
