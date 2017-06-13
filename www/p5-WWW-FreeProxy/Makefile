# Created by: Dennis Herrmann <adox@mcx2.org>
# $FreeBSD: head/www/p5-WWW-FreeProxy/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	WWW-FreeProxy
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Fetch proxies from free proxy lists

BUILD_DEPENDS=	p5-YAML>=0:textproc/p5-YAML
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
