# Created by: Andrea Cervesato <andrea@cervesato.it>
# $FreeBSD: head/www/mod_qos/Makefile 464189 2018-03-11 17:38:45Z brnrd $

PORTNAME=	mod_qos
DISTVERSION=	11.51
CATEGORIES=	www
MASTER_SITES=	SF/mod-qos
DIST_SUBDIR=	apache2

MAINTAINER=	fax@nohik.ee
COMMENT=	QoS for Apache

LICENSE=	GPLv2+

USES=		apache:2.2+
AP_GENPLIST=	yes
AP_FAST_BUILD=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/apache2

.include <bsd.port.mk>
