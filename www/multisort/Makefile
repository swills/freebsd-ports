# Created by: Dennis Herrmann <adox@mcx2.org>
# $FreeBSD: head/www/multisort/Makefile 477640 2018-08-20 09:38:06Z amdmi3 $

PORTNAME=	multisort
PORTVERSION=	1.1
CATEGORIES=	www
MASTER_SITES=	http://www.xach.com/multisort/ \
		http://mirror.mcx2.org/

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Small program to take multiple httpd logfiles into one

LICENSE=	GPLv2+

PLIST_FILES=	bin/multisort

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/multisort

.include <bsd.port.mk>
