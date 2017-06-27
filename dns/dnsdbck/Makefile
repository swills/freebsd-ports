# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/dns/dnsdbck/Makefile 444443 2017-06-27 07:05:14Z danfe $

PORTNAME=	dnsdbck
PORTVERSION=	1.01
CATEGORIES=	dns perl5
MASTER_SITES=	http://download.gnu.org.ua/pub/release/dnstools/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Verify consistency of DNS information in an SQL database

LICENSE=	GPLv3

RUN_DEPENDS=	p5-Net-CIDR>0:net-mgmt/p5-Net-CIDR \
		p5-Net-DNS>0:dns/p5-Net-DNS

USES=		perl5
USE_PERL5=	configure

PLIST_FILES=	bin/dnsdbck ${SITE_MAN1}/dnsdbck.1.gz

.include <bsd.port.mk>
