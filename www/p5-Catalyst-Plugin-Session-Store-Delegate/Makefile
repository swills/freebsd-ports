# Created by: Fernan Aguero <fernan@iib.unsam.edu.ar>
# $FreeBSD: head/www/p5-Catalyst-Plugin-Session-Store-Delegate/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Catalyst-Plugin-Session-Store-Delegate
PORTVERSION=	0.06
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Delegate session storage to an application model object

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Catalyst-Plugin-Session>=0.27:www/p5-Catalyst-Plugin-Session \
		p5-MRO-Compat>0:devel/p5-MRO-Compat
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
